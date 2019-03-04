var slides = document.getElementsByClassName("slide-item");
var images = ["img/logo.jpg", "img/arrow.png", "img/nitm-logo.jpg"];
var count = 0;
var len = images.length;

function slide() {
    slides[0].src = images[(count + 1) % len];
    slides[1].src = images[(count + 2) % len];
    slides[2].src = images[(count + 3) % len];
    count = (count + 1) % len;
}

function slideup(){
    slides[0].src = images[(count + 2) % len];
    slides[1].src = images[(count) % len];
    slides[2].src = images[(count + 1) % len];
    if(count-1<0)
        count = 2;
    else
        count = (count-1)%len;
}

setInterval(slide, 5000);