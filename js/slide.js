var slides = document.getElementsByClassName("slide-item");
var images1 = ["img/logo.jpg", "img/arrow.png", "img/nitm-logo.jpg"];
var count = 0;
var len1 = images1.length;

function slide() {
    slides[0].src = images1[(count + 1) % len1];
    slides[1].src = images1[(count + 2) % len1];
    slides[2].src = images1[(count + 3) % len1];
    count = (count + 1) % len1;
}

setInterval(slide, 5000);