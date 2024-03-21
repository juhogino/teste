public class Main {
    public static void main(String[] args) {
        Calculadora calc = new Calculadora();
        calc.numA = 10.0;
        calc.numB = 2.0;
        System.out.println ("Soma: " + calc.somar());
        System.out.println ("Subtração: " + calc.subtrair());
        System.out.println ("Multiplicação: " + calc.multiplicar());
        System.out.println ("Divisão: " + calc.dividir());
    }
}