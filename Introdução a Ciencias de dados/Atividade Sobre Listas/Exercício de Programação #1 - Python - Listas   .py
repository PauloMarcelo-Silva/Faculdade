#!/usr/bin/env python
# coding: utf-8

# In[1]:


top_10 = ["Tones and I - Dance Monkey", "Lady Gaga, Ariana Grande - Rain on Me",
          "Justin Bieber - Yummy", "MISCHO - Photon Love", "Dua Lipa - Break My Heart",
          "Lady Gaga, BLACKPINK - Sour Candy", "Dua Lipa - Don't Start Now",
          "Justin Bieber, Quavo - Intentions", "Doja Cat - Say So",
          "Karol G, Nicki Minaj - Tusa", "Benee, Gus Dapperton - Supalonely"]


# In[2]:


top_10_dict = [{"artist": x.split(" - ")[0], "song": x.split(" - ")[1]} for x in top_10]
top_10_dict


# In[42]:


def get_songs(musica):
    musicas = []
    for a in range(len(musica)):
        musicas.append(musica[a]['song'])
    return musicas


# In[43]:


get_songs(top_10_dict)


# In[44]:


def get_artists(artista):
    artistas = []
    for a in range(len(artista)):
        artistas.append(artista[a]['artist'])
    return artistas


# In[45]:


get_artists(top_10_dict)


# In[ ]:




