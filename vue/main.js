    var app = new Vue({
        el:'#app',
        data:{
            message:'hello world',
        }
    })
    var app2 = new Vue({
        el:'#app-2',
        data:{
            seen:true
        }
    })
    var app3 = new Vue({
        el:'#app-3',
        data:{
            message:'页面加载于' + new Date().toLocaleString()
        }
    })
    var app4 = new Vue({
        el:'#app-4',
        data:{
            todos:[
                { text:'学习JS'},
                { text:'学习Vue'},
                { text:'整个牛项目'}
            ]
        }
    })
    var app5 = new Vue({
        el:'#app-5',
        data:{
            message:'hello,Vue'
        },
        methods:{ 
            reverseMessage : function(){
                this.message =this.message.split('') .reverse().join('')
            }
        }
    })
    var app6 = new Vue({
        el:'#app-6',
        data : {
            message:'Hello'
        }
    })