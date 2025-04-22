// Define a new function to print a name.
let printName name =
    printfn $"Hello {name} from F#!"

// Define a new function to make a sum with two numbers.
let printSum a b =
    printfn $"a = {a}"
    printfn $"b = {b}"
    let sum = a + b
    printfn $"{a} + {b} = {sum}"

// Define a new function to make a area calculation for rectangles
let printAreaRetangulo c h=
    printfn $"Comprimento = {c}"
    printfn $"Altura = {h}"
    let area = c * h
    printfn $"A área do retângulo com {c}m de comprimento e {h}m de altura é {area}m²."

// Call your functions!
printName "Guilherme"
printSum 2 5   
printAreaRetangulo 5 2
