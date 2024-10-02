function output(){

    let imgurl = "";
    let username = "Madhur Sahu";
    let userproffession = "Student";
    let useremail = "madhursahu9233@gmail.com";
    let usermobile = "9752975526";
    let useraddress = "Bhopal";
    let card = ` <section class="carddesign">
            <article>
                <div><img src="${imgurl}" alt=""></div>
                <div>
                    <h4>${username}</h4>
                    <h5>${userproffession}</h5>
                    <h6>${useremail}</h6>
                    <h6>${usermobile}</h6>
                </div>
            </article>
            <article>
                <div>${useraddress}</div>
            </article>
        </section>`;
    let selectshowcard = document.querySelector('.showcard');
    selectshowcard.innerHTML = card;
    }