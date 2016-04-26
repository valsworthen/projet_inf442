#include <iostream>

int ** reduction(int ** mat, double alpha){
  //construction de la matrice e
  int* e= new int *(mat.size());
  for(int i=0; i< mat.size(); i++)
    e[i]=1;
  //initialisation de Q comme matrice
  int **Q = new int **[mat.size()];
  for(int i=0; i< mat.size(); i++)
    Q[i] = new int*[mat.size()];
  //remplissage de Q + construction de d --> fonction
  int * d=new int*[mat.size()];
  for(int i =0; i< mat.size(); i++){
    for(int j=0; j<mat.size(); j++){
      int nb_liens_j;
      for(int k =0; k<mat.size(); k++){
        nb_liens_j+=mat[k][j];
      }
      if(nb_liens_j >0){
        Q[i][j]=mat[i][j];
        d[j]=0
      }
      else{
        Q[i][j]=0;
        d[j]=1;
      }
    }
  }
}

int main(int argv, char ** argch){

}
