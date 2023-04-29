val fruits: MutableList<String> = mutableListOf("Straberry", "Mango", "Apple")

fun main(){
    println(fruits.size)
    println("the size of fruits is ${fruits.size}")
    
    fruits.forEach{
       	i->println("Its a $i")
    }
    
    fruits.add("Kiwi")

    println("the size of fruits is ${fruits.size}")
    
    fruits.forEach{
       	i->println("Its a $i")
    }
}