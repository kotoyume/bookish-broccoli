// var container = new Vue({
//     el:'#container',
//     data(){
//         content:'Hello'
//     }
// })
// var app2 = new Vue({
//     el: '#eg-2',
//     data() {
//       message: 'Hello'
//     }
//   })
// function Add(){
//     let numDom1 = document.getElementById('num-1');
//     let numDom2 = document.getElementById('num-2');
//     let x = numDom1.value;
//     let y = numDom2.value;
//     x = parseInt(x);
//     y = parseInt(y);
//     function f(x,y) {
//         return x + y
//     }
//     document.getElementById('result').innerHTML = f(x,y)
// }
function Note(){
    let nameDom = document.getElementById('name') ;
    let contentDom = document.getElementById('content');
    let name = nameDom.value;
    let content = contentDom.value;
    document.getElementById('note').innerHTML += '<li>' + name + ':' + content +'</li>'
}
