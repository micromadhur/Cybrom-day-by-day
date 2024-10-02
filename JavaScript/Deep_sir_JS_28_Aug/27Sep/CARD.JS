let arrofobj = [
    {
    "cimg":"https://images.pexels.com/photos/459225/pexels-photo-459225.jpeg?cs=srgb&dl=daylight-environment-forest-459225.jpg&fm=jpg",
    "cname":"watch",
    "crating":"4.5",
    "cbrand":"bao"
    }
]

let show = document.querySelector('#output');
show.innerHTML =  arrofobj.forEach(e=>`
    <div id="card">
    <img src="${e.cimg}" alt="">
    <div id="cardc">
    <div>${e.cname}</div>
    <div>${e.crating}</div>
    <div>${e.cbrand}</div>
    <div>${e.cprize}</div>
    </div>

    </div>`).join(""),