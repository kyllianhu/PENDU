#include "fenetre.h"
#include "ui_fenetre.h"
// DEBUG
#include <iostream>

fenetre::fenetre(QWidget *parent) : QMainWindow(parent), ui(new Ui::fenetre)
    {
    ui->setupUi(this);

    // opérations réalisées au début du programme
    secret = new mot();
    lettres_saisies = "";
    erreurs = 0; // Initialisation du compteur d'erreurs
    // DEBUG
    std::cerr<<"#"<<secret->get_str()<<"#";
    secret->set_visible(false);
    ui->l_lettre->setText(secret->get_str().c_str());

    //ajout connect pushbutton jouer
    connect(ui->pushButton,&QPushButton::clicked, this, &fenetre::mon_action);

    ui->l_image_titre->setPixmap(QPixmap("pendu.jpg"));
    ui->l_image_titre->setScaledContents(true); // pour que l'image s'ajuste automatiquement dans le QLabel
    }

fenetre::~fenetre()
    {
    delete ui;
    }

void fenetre::mon_action()
    {
    char c;
    c = ui->lineEdit->text().toStdString().at(0);
    ui->lineEdit->clear();
    lettre l(c);
    // DEBUG
    std::cerr<<"#"<<l.get_char(true)<<"#";
    
    bool lettre_trouvee = secret->set_visible(l.get_char(), true);
    ui->l_lettre->setText(secret->get_str().c_str());

    // Ajout de la lettre aux lettres saisies
    lettres_saisies += std::string(1, l.get_char(true)) + " ";
    ui->label_message->setText(("Vous avez saisi les lettres " + lettres_saisies).c_str());

    //gestion des images
    if(!lettre_trouvee)
        {
        erreurs++;
        ui->l_image_titre->setPixmap(QPixmap(("pendu" + std::to_string(erreurs) + ".png").c_str()));
        
        // Arrêt du jeu après 6 erreurs
        if(erreurs >= 6)
            {
            secret->set_visible(true); // Affiche tout le mot
            ui->l_lettre->setText(secret->get_str().c_str());
            ui->pushButton->setEnabled(false); // Désactive le bouton
            ui->lineEdit->setEnabled(false); // Désactive la saisie
            ui->label_message->setText("Partie perdue !");
            }
        }
    }
