import numpy as np
import matplotlib.pyplot as py
import matplotlib.patches as patch
 
#Plotting the tri colours in India flag
a = patch.Rectangle((0,1), width=12, height=2, facecolor='green', edgecolor='grey')
b = patch.Rectangle((0,3), width=12, height=2, facecolor='white', edgecolor='grey')
c = patch.Rectangle((0,5), width=12, height=2, facecolor='#FF9933', edgecolor='grey')
fig, ax = py.subplots()
ax.add_patch(a)
ax.add_patch(b)
ax.add_patch(c)
 
#Drawing AshokChakra Circle in the middle
radius=0.8
py.plot(6,4, marker = 'o', markerfacecolor = '#000088ff', markersize = 9.5)
ashikChakra = py.Circle((6, 4), radius, color='#000088ff', fill=False, linewidth=7)
ax.add_artist(ashikChakra)
 
#Adding 24 spokes in AshokChakra
for i in range(0,24):
   p = 6 + radius/2 * np.cos(np.pi*i/12 + np.pi/48)
   q = 6 + radius/2 * np.cos(np.pi*i/12 - np.pi/48)
   r = 4 + radius/2 * np.sin(np.pi*i/12 + np.pi/48)
   s = 4 + radius/2 * np.sin(np.pi*i/12 - np.pi/48)
   t = 6 + radius * np.cos(np.pi*i/12)
   u = 4 + radius * np.sin(np.pi*i/12)
   ax.add_patch(patch.Polygon([[6,4], [p,r], [t,u],[q,s]], fill=True, closed=True, color='#000088ff'))
 
py.axis('equal')
py.show()