var modal = document.getElementsByClassName("modal");
var mmodal = document.getElementsByClassName("mmodal");

function closing() {
  for (var k = 0; k < modal.length; ++k) {
    modal[k].style.top = "90%";
    modal[k].style.height = "0";
  }
}
for (var i = 0; i < modal.length; ++i) {
  modal[i].addEventListener('click', closing, false);
}

function close2() {
  for (var o = 0; o < mmodal.length; ++o) {
    mmodal[o].style.top = "90%";
    mmodal[o].style.height = "0";
  }
}
for (var x = 0; x < mmodal.length; ++x) {
  mmodal[x].addEventListener('click', close2, false);
}