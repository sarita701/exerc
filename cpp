class Patient {
private:
    double masse;
    double hauteur;

public:
    void init(double m, double h) {
        if (m > 0 && h > 0) {
            masse = m;
            hauteur = h;
        } else {
            masse = 0;
            hauteur = 0;
        }
    }

    void afficher() const {
        std::cout << "Patient : " << masse << " kg pour " << hauteur << " m" << std::endl;
    }

    double poids() const {
        return masse;
    }

    double taille() const {
        return hauteur;
    }

    
    double imc() const {
        if (hauteur == 0) return 0;
        return masse / (hauteur * hauteur);
    }
};


