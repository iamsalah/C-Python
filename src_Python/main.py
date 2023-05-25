#!/usr/bin/env python
# coding: utf-8

# In[1]:


from application_universitaire import ApplicationUniversitaire
from universite import Universite
from etudiant import Etudiant
from professeur import Professeur
from cours import Cours


# In[2]:


app_universitaire = ApplicationUniversitaire("Gestion Université")
app_universitaire.lancer_application()


# In[3]:


etudiant1 = Etudiant("Dupont", "Jean", 20, "E001")
etudiant2 = Etudiant("Martin", "Sophie", 22, "E002")
professeur1 = Professeur("Durand", "Pierre", 40, "Informatique")
professeur2 = Professeur("Lefebvre", "Marie", 38, "Mathématiques")
cours1 = Cours("Introduction à l'Informatique", "INFO101", professeur1)
cours2 = Cours("Algèbre Linéaire", "MATH201", professeur2)
universite = Universite("Université de Paris Saclay")


# In[4]:


etudiant1.ajouter_cours(cours1)
etudiant2.ajouter_cours(cours2)


# In[5]:


universite.ajouter_etudiant(etudiant1)
universite.ajouter_etudiant(etudiant2)
universite.ajouter_professeur(professeur1)
universite.ajouter_professeur(professeur2)
universite.ajouter_cours(cours1)
universite.ajouter_cours(cours2)


# In[6]:


print("Informations de l'étudiant 1 :")
etudiant1.afficher_informations()


# In[7]:


print("\nInformations de l'étudiant 2 :")
etudiant2.afficher_informations()


# In[8]:


print("\nInformations du cours 1 :")
cours1.afficher_informations()


# In[9]:


app_universitaire.utiliser_application()


# In[10]:


app_universitaire.quitter_application()


# In[ ]:




