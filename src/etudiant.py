#!/usr/bin/env python
# coding: utf-8

# In[2]:


class Etudiant:
    
    def __init__(self, nom, prenom, age, matricule, cours_inscrits=None):
        self.nom = nom
        self.prenom = prenom
        self.age = age
        self.matricule = matricule
        self.cours_inscrits = cours_inscrits if cours_inscrits is not None else []

    def ajouter_cours(self, cours):
        self.cours_inscrits.append(cours)

    def afficher_informations(self):
        print(f"Nom: {self.nom}")
        print(f"Prénom: {self.prenom}")
        print(f"Âge: {self.age}")
        print(f"Matricule: {self.matricule}")
        print("Cours inscrits:")
        for cours in self.cours_inscrits:
            print(cours)



# In[ ]:




