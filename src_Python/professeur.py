#!/usr/bin/env python
# coding: utf-8

# In[1]:


class Professeur:
    
    def __init__(self, nom, prenom, age, specialite, departement=None):
        self.nom = nom
        self.prenom = prenom
        self.age = age
        self.specialite = specialite
        self.departement = departement

    def assigner_departement(self, departement):
        self.departement = departement

    def afficher_informations(self):
        print(f"Nom: {self.nom}")
        print(f"Prénom: {self.prenom}")
        print(f"Âge: {self.age}")
        print(f"Spécialité: {self.specialite}")
        if self.departement:
            print(f"Département: {self.departement}")
        else:
            print("Aucun département assigné")


# In[ ]:




