package calculadora;


public class Calculadora {
    double x;
    double y;
   
    
    public Calculadora(){
        x = 0;
        y = 0;
    }  // CONSTRUTOR
    
    public double soma(double x, double y){
        return x + y;
    }
    
    public double subtracao(double x, double y){   
        return x - y;
    }
    
    public double multiplicacao(double x, double y){
        return x * y;
    }   
    
    public double divisao(double x, double y){
        return x / y;
    }
}
