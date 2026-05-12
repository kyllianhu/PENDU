# Diagrammes du projet Pendu Graphique

## Diagramme de Classes

Ce diagramme représente la structure statique des classes et leurs relations (Héritage, Composition, Association).

```mermaid
classDiagram
    class QMainWindow {
        <<Framework Qt>>
    }

    class fenetre {
        - Ui::fenetre* ui
        - mot* secret
        - std::string lettres_saisies
        - int erreurs
        + fenetre()
        + ~fenetre()
        + mon_action() void
    }

    class mot {
        - std::vector~lettre~ m
        - static std::string genere()
        + mot(std::string)
        + get_str() std::string
        + set_visible(bool) void
        + set_visible(unsigned int, bool) void
        + set_visible(char, bool) bool
        + is_visible() bool
    }

    class lettre {
        - char l
        - bool v
        - static char cache
        + lettre()
        + lettre(char)
        + get_char(bool) char
        + set_visible(bool) void
        + set_cache(char) void
        + get_cache() char
    }

    %% Relations
    QMainWindow <|-- fenetre : Héritage
    fenetre "1" *-- "1" mot : Possède (secret)
    mot "1" *-- "n" lettre : Est composé de (m)
```

## Diagramme des Cas d'Utilisation

Ce diagramme représente les interactions de l'utilisateur (le Joueur) avec l'interface graphique du jeu du Pendu.

```mermaid
flowchart LR
    Joueur((Joueur))

    subgraph "Jeu du Pendu Graphique"
        UC1(Lancer une nouvelle partie)
        UC2(Proposer une lettre)
        UC3(Voir l'avancement du mot)
        UC4(Voir l'état de la potence / erreurs)
        UC5(Gagner la partie)
        UC6(Perdre la partie)
    end
    
    Joueur --> UC1
    Joueur --> UC2
    Joueur --> UC3
    Joueur --> UC4
    
    UC2 -.-> |Met à jour| UC3
    UC2 -.-> |Met à jour si erreur| UC4
    UC3 -.-> |Déclenche si mot complet| UC5
    UC4 -.-> |Déclenche si trop d'erreurs| UC6
```
