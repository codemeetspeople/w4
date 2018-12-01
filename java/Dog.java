public class Dog extends Animal implements Barkable {
    public Dog(String name) {
        this.name = name;
    }

    public Dog() {
        this("Dog");
    }

    @Override
    public void eat() {
        System.out.println(this.name + " eats meat");
    }

    public void bark() {
        System.out.println(this.name + " say \"woof!\"");
    }
}