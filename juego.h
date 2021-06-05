
class juego{
  protected:
      int Tamaño_x;
      int Tamaño_y;
      int puntos;
      int Codex[100][100]; //Almacena la actual dispocicion del juego de forma codificada
  public:
  juego(int, int);


  void setTamaño_x(int);
  void setTamaño_y(int);
  void setpuntos();
  void setCodex(int,int,int);

  int getTamaño_x();
  int getTamaño_y();
  int getpuntos ();
  int getCodex(int,int);



  void Generar_comida();
  bool CheckFood(int ,int);
  void ColisionDetector(int,int);
  void Definir_tablero();
  

};
