public abstract class Animal {
    protected String name;

    public Animal(String name) {
        this.name = name;
    }

    public Animal() {
        this("Animal");
    }

    public String getName() {
        return this.name;
    }

    public abstract void eat();
}
