public class Cat extends Animal implements Meowable {
    public Cat(String name) {
        this.name = name;
    }

    public Cat() {
        this("Cat");
    }

    public void eat() {
        System.out.println(this.name + " eats fish");
    }

    public void meow() {
        System.out.println(this.name + " say \"meow!\"");
    }
}