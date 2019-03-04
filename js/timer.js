var ToDate = new Date("Apr 5, 2019 09:00:00").getTime();

//callback
var countdown = setInterval(function () {
    var now = new Date().getTime();
    var timeLeft = ToDate - now;

    var days = Math.floor(timeLeft / (1000 * 60 * 60 * 24));
    var hours = Math.floor((timeLeft % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
    var minutes = Math.floor((timeLeft % (1000 * 60 * 60)) / (1000 * 60));
    var seconds = Math.floor((timeLeft % (1000 * 60)) / 1000);

    document.getElementById("timer").innerHTML = days + "d  " + hours + "h " + minutes + "m " + seconds + "s ";

    if(timeLeft<0){
        clearInterval(countdown);
        document.getElementById("timer").innerHTML = "It Has Begun!";
    }
},1000);