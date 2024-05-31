function displayDate() {
    function Person(name, age, haircolor) {
        this.name = name;
        this.age = age;
        this.haircolor = haircolor;
    };
    const tj = new Person("TJ", 33, "black");
    alert(tj.age);
}