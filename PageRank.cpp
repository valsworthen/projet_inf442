#include <iostream>
#include <vector>

int vector<vector<int> > reduction(std::vector<std::vector<double> > mat, double alpha){
  using namespace std;
  int N=mat.size();
  //construction de la matrice e
  vector<int> e;
  for(int i=0; i< N; i++)
    e.push_back(1);
  //initialisation de Q comme matrice
  vector<vector<int> > Q;
  for(int i=0; i< N; i++)
    Q.push_back(vector<int>());
  //remplissage de Q + construction de d --> fonction
  //dj=0 si Nj >0 / 1 sinon
  //Qij = mat(ij) si Nj>0 / 0 sinon
  vector<int> d;
  for(int i=0; i< N; i++){
    d.push_back(0);
    for(int j=0; j<N; j++){
      int nb_liens_j;
      for(int k =0; k<N; k++){
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
//On a construit Q, e, d et Nj.
//P=Q+trans(d)*e/N
//construction de P
  vector<vector<int> > P;
  for(int i=0; i<N;i++){
    P.push_back(vector<int>());
    for(int j=0; j<N; j++){
      P[i].push_back(Q[i][j]+e[i]*d[j]/N);
    }
  }

  //Palpha ) alpha*P + (1-alpha)*e*trans(e)/N
  //construction de Palpha
  vector<vector<int> > Palpha;
  for(int i=0; i<N;i++){
    Palpha.push_back(vector<int>());
    for(int j=0; j<N; j++){
      Palpha[i].push_back(alpha*P[i][j]+(1-alpha)*e[i]*e[j]/N);
    }
  }

  return Palpha;
}

/*
Algorithm 1
Methode des puissances iterees
1: Entree :  Matrice P marge d'erreur epsilon
2: vecteur initial r non nul de norme 1.
3: while norme(r(t)-r(t+1)) <= epsilon
4:    r(t+1) =Palpha*r(t)
5:    r(t+1)=r(t+1)/norme(r(t+1))
6: end while
7:return r
*/
vector<int> puissancesIterees(vector<vector<int> > mat, double epsilon){
  
}

int main(int argv, char ** argch){

}
