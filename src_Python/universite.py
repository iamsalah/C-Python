#!/usr/bin/env python
# coding: utf-8

# In[1]:


class Universite:

    def __init__(self, nom):
        self.nom = nom
        self.etudiants = []
        self.professeurs = []
        self.cours = []

    def ajouter_etudiant(self, etudiant):
        self.etudiants.append(etudiant)

    def ajouter_professeur(self, professeur):
        self.professeurs.append(professeur)

    def ajouter_cours(self, cours):
        self.cours.append(cours)



# In[ ]:




