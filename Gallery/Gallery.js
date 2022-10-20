const filterItem = document.querySelector(".items");
// Uses query selector for selecting category
const filterImg = document.querySelectorAll(".gallery .image");
window.onload = () => {
    filterItem.onclick = (selectedItem) => {
        // Uses if else to check which category is going to remain Active
        if (selectedItem.target.classList.contains("item")) {
            filterItem.querySelector(".active").classList.remove("active");
            selectedItem.target.classList.add("active");
            let filterName = selectedItem.target.getAttribute("data-name");
            filterImg.forEach((image) => {
                let filterImges = image.getAttribute("data-name");
                if ((filterImges == filterName) || (filterName == "all")) {
                    image.classList.remove("hide");
                    image.classList.add("show");
                } 
                // Hide and show images is also decided by the if else statements
                else {
                    image.classList.add("hide");
                    image.classList.remove("show");
                }
            });
        }
    }
    // Onclick is used for previewing images
    for (let i = 0; i < filterImg.length; i++) {
        filterImg[i].setAttribute("onclick", "preview(this)");
    }
}
// Used query selector for the preview box
const previewBox = document.querySelector(".preview-box"),
    categoryName = previewBox.querySelector(".title p"),
    previewImg = previewBox.querySelector("img"),
    closeIcon = previewBox.querySelector(".icon"),
    shadow = document.querySelector(".shadow");
// Again onclick is used to close and open preview box,to zoom in images
function preview(element) {
    document.querySelector("body").style.overflow = "hidden";
    let selectedPrevImg = element.querySelector("img").src;
    let selectedImgCategory = element.getAttribute("data-name");
    previewImg.src = selectedPrevImg;
    categoryName.textContent = selectedImgCategory;
    previewBox.classList.add("show");
    shadow.classList.add("show");
    closeIcon.onclick = () => {
        previewBox.classList.remove("show");
        shadow.classList.remove("show");
        document.querySelector("body").style.overflow = "auto";
    }
}
