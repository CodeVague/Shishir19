var modal = document.getElementsByClassName("modal");
var mmodal = document.getElementsByClassName("mmodal");
var menu = document.getElementById("menu");
var close = document.getElementById("close");

function openmod(i) {modal[i].style.height = "100%";
modal[i].style.top = "0";
}
function openmod2(i) {mmodal[i].style.height = "100%";
mmodal[i].style.top = "0";
}
function drop() {
    document.getElementById("drop-menu").style.display = "block";
    menu.style.display = "none";
    close.style.display = "block";
}

function undrop() {
    document.getElementById("drop-menu").style.display = "none";
    menu.style.display = "block";
    close.style.display = "none";
}