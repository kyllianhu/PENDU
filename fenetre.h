#ifndef FENETRE_H
#define FENETRE_H

#include <QMainWindow>
#include "mot.h"

QT_BEGIN_NAMESPACE
namespace Ui
    {
    class fenetre;
    }
QT_END_NAMESPACE

class fenetre : public QMainWindow
    {
    Q_OBJECT

    private:
        Ui::fenetre *ui;
        mot * secret;
        std::string lettres_saisies;    // Ajout pour stocker toutes les lettres
        int erreurs; // Ajout pour compter les erreurs

    public:
        fenetre(QWidget *parent = nullptr);
        ~fenetre();
       void mon_action();

    };
#endif // FENETRE_H
