let a = "aag agad adgag a gk";

let arr = a.split(" ");

swap(arr);

console.log(arr.join(" "));

function swap(arr){
    let ind1 = 0, ind2 = 0;
    let ShortWord = arr[0], LongWord = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if(arr[i].length > LongWord.length) {
            LongWord = arr[i];
            ind1 = i;
        }
        else if (arr[i].length < ShortWord.length){
            ShortWord = arr[i];
            ind2 = i;
        }
        
    }
    if(LongWord == ShortWord){
        console.log("equal")
    }else {
        arr[ind1] = ShortWord;
        arr[ind2] = LongWord;
    }
}