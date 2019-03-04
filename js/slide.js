var slides = document.getElementsByClassName("slide-item");
var images1 = ["img/Drama1.jpg", "img/EBSB2.jpg", "img/EBSB3.jpg","img/EBSB4.jpg"];
var images2 = ["img/Harmony2.jpg","img/Harmony5.jpg","img/Pronite1.jpg","img/Pronite2.jpg"];
var images3 = ["img/Panache5.jpg","img/Panache10.jpg","img/Panache7.jpg","img/Panache22.jpg"];
var images4 = ["img/su2.jpg","img/su7.jpg","img/su10.jpg","img/su11.jpg"];

var count = 0;

function slide() {
    ++count;
    slides[0].src = images1[(count) % 4];
    slides[1].src = images2[(count) % 4];
    slides[2].src = images3[(count) % 4];
    slides[3].src = images4[(count) % 4];
}

setInterval(slide, 4000);