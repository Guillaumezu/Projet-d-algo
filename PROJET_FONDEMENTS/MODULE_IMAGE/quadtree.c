/* -*- c-basic-offset: 3 -*- 
 *
 * ENSICAEN
 * 6 Boulevard Marechal Juin 
 * F-14050 Caen Cedex 
 *
 * This file is owned by ENSICAEN students.
 * No portion of this document may be reproduced, copied
 * or revised without written permission of the authors.
 */ 

/**
 * @author Guillaume ZUNINO <guillaume.zunino@ecole.ensicaen.fr> 
 * @version 0.0.1 - Wed Feb  12 2017
 */

/**
 * @file quadtree.c
 *  
 * Description of the program objectives.
 * All necessary references.
 */


#include "image_util.h"

typedef struct quadtree* pQuadtree;

typedef struct quadtree
{
   pQuadtree sons[4];
   double M0, M1[3], M2[3];
} quadtree;


/**
 * A complete description of the function.
 * It creates a quad tree,empty for the moment.
 * @return qtree a quad tree cretaed by the function.
 */

extern quadtree create_quadtree(){
   quadtree qtree;
   *(qtree.sons)=NULL;
   qtree.M0=0;
   qtree.M1[3]=0;
   qtree.M2[3]=0;
   return qtree;
}




/**
 * A complete description of the function.
 * It divides a quad tree in four sons.
 * @param qtree a quad tree
 */

extern void quadtree_subdivide(quadtree qtree){
   int i;
   for (i=0;i<4;i++){
      *((*(qtree.sons[i])).sons)=NULL;
      (*(qtree.sons[i])).M0=(qtree.M0)/4;
      (*(qtree.sons[i])).M1[3]=0;
      (*(qtree.sons[i])).M2[3]=0;
   } 
}






/**
 * A complete description of the function.
 * It removes all a quad tree.
 * @param qtree a quad tree
 */

extern void delete_quadtree(quadtree qtree){
   int i;
   for (i=0;i<4;i++){
      *((*(qtree.sons[i])).sons)=NULL;
      delete_quadtree(*(qtree.sons[i]));
   }
}





/**
 * A complete description of the function.
 * It creates a quad tree. It cuts nodes, in order to var<sill.
 * @param picture an image that the user wants to divide.
 * @param sill the sill that var has to be under.
 * @return qtree a quad tree of the picture.
 */

extern quadtree split_image(image picture, double sill){
   var=(1/
}




int main(){
   quadtree Q;
   Q=create_quadtree();
   quadtree_subdivide(Q);
   delete_quadtree(Q);
   return 0;
}










