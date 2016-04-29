#include <iostream>
#include <vector>

int ** reduction(std::vector<std::vector<double> > mat, double alpha){
  using namespace std;
  //construction de la matrice e
  vector<int> e;
  for(int i=0; i< mat.size(); i++)
    e[i]=1;
  //initialisation de Q comme matrice
  vector<vector <int> > Q;
  for(int i=0; i< mat.size(); i++)
    Q.push_back(vector<int>());
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
