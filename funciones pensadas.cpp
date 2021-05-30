
#include <iostream>

using namespace std;

// juego
void Generar_comida(int x, int y){
    int ranx=random(1,x);
    int rany=random(1,y);
    for(Codex[ranx][rany]!=0){
 
        int ranx = rand() % x + 1;	
        int rany = rand() % Y + 1;
    }
    comida[0]=ranx;
    comida[1]=rany;
}
bool CheckFood(int x,int y){
    if(vivora[1]==comida[1] && vivora[0]==comida[0]) puntos++;return true;
}
void ColisionDetector(int x, int y){
    if(vibora[0]==0  && vibora[0]==x  && vibora[1]==0  && vibora[1]==y)cout<<"Game over";return;
    for(int i =1;i<y;i++){
        for(int j =1;j<x;j++){
            if(Codex[j][i]== 4 && Codex[j][i]== 5 && Codex[j][i]== 6 && Codex[j][i]== 7)cout<<"Game over";return;
        }
    }
}
void Definir_tablero(int x, int y){
    for(int i =0;i<=y;i++){
        for(int j =0;j<=x;j++){
            if(j==0)Codex[x][y]=2;
            if(j==x)Codex[x][y]=2;
            if(i==0)Codex[x][y]=3;
            if(i==y)Codex[x][y]=-3;

        }
}
}

// vibora
void obtenerDireccionCola(int largo,int x,int y){
    if(largo==0)return;
    switch (Codex[vivora[2]][vivora[3]])
            {
            case 4:
                vibora[3]++;
                break;
            case 5:
                vibora[3]--;
                break;
            case 7:
                vibora[2]++;
                break;
            case 6:
                vibora[2]--;
                break;
            if(CheckFood())return;
            Codex[j][i]=0;
 } 
 }   
void obtenerDireccionCaveza(){
    
    char Direcion;
    cin>>Direccion;
    if (Nopizarse[0]==Direccion)cout<<"Valor no valido";return;
    switch (Direccion)
    {
    case "N":
        Codex[vibora[0]][vibora[1]]=4;
        vibora[1]++;
        Nopizarse[0]="S";
        break;
    case "S":
        Codex[vibora[0]][vibora[1]]=5;
        vibora[1]--;
        Nopizarse[0]="N";
        break;
    case "E":
        Codex[vibora[0]][vibora[1]]=7;
        vibora[0]++;
        Nopizarse[0]="O";
        break;
    case "O":
        Codex[vibora[0]][vibora[1]]=6;
        Nopizarse[0]="E";
        vibora[0]--;
        break; 
    default:
        cout<<"Valor no valido"<<endl;
        break;
    }
    
}


// jugador
void Dibujar(int x, int y){
    for(int i =0;i<=y;i++){
        for(int j =0;j<=x;j++){
            switch (Codex[j][i])
            {
            case 0:
                cout<<"  ";
                break;
            case 1||4||5||6||7||8:
                cout<<"O ";
                break;
            case 3:
                cout<<"| ";
                break;
            case -3:
                cout<<" |"<<endl;
                break;
            case 2:
                cout<<"__";
                break;
            case -1:
                cout<<"@ ";
                break;
            case 8:
                cout<<"* ";
                break;
            
            default:
                break;
            }
    }
}
}

int main(){
    int Codex[x][y];
    int vivora[x*y]; /*cabeza=([0]=x,[1]=y),cola=([2]=x,[3]=y)*/
    vivora[0]=1;
    vivora[1]=1;
    vivora[2]=1;
    vivora[3]=1;
    int comida[2];
    char Nopizarse[1];
    Nopizarse[0]="x";
    Definir_tablero();
    while(true){
    obtenerDireccionCaveza();
    ColisionDetector();
    obtenerDireccionCola();
    Dibujar();
    }
}

