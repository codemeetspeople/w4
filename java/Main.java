public class Main {
    public static void interact(Meowable obj) {
        obj.meow();
    } 

    public static void main(String[] args) {
        Cat cat = new Cat();

        cat.eat();
        interact(cat);
    }
}