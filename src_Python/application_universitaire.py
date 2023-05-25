#!/usr/bin/env python
# coding: utf-8

# In[3]:


class ApplicationUniversitaire:
    
    def __init__(self, nom_application):
        self.nom_application = nom_application

    def lancer_application(self):
        print(f"{self.nom_application} lancée.")

    def utiliser_application(self):
        print(f"Utilisation de {self.nom_application} en cours...")
        
    def quitter_application(self):
        print(f"{self.nom_application} quittée.")



# In[ ]:




