#!/usr/bin/env python
# coding: utf-8

# In[1]:


class Cours:
    
    def __init__(self, nom, code, professeur):
        self.nom = nom
        self.code = code
        self.professeur = professeur
        
    def afficher_informations(self):
        print(f"Nom: {self.nom}")
        print(f"Code: {self.code}")
        print("Professeur: ")
        self.professeur.afficher_informations()


# In[ ]:




