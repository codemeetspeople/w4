class CatDog extends Animal implements Meowable, Barkable {
    public CatDog(String name) {
        this.name = name;
    }

    public CatDog() {
        this("CatDog");
    }

    @Override
    public void eat() {
        System.out.println(this.name + " eats fish and meat");
    }

    public void meow() {
        System.out.println(this.name + " say \"meow11111!\"");
    }

    public void bark() {
        System.out.println(this.name + " say \"woof111111!\"");
    }
}