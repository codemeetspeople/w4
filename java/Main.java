public class Main {
    public static void interact(Meowable obj) {
        obj.meow();
    }

    public static void interact(Barkable obj) {
        obj.bark();
    }

    public static void main(String[] args) {
        Cat cat = new Cat();
        Dog dog = new Dog();
        CatDog cd = new CatDog();

        cat.eat();
        interact(cat);

        dog.eat();
        interact(dog);

        cd.eat();
        interact((Meowable)cd);
        interact((Barkable)cd);
    }
}