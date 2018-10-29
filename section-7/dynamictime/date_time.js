// Source: http://www.webestools.com
function date_time(id)
{
        const date = new Date;
        const year = date.getFullYear();
        const month = date.getMonth();
        const months = ['January', 'February', 'March', 'April', 'May', 'June', 'Jully', 'August', 'September', 'October', 'November', 'December']
        const d = date.getDate();
        const day = date.getDay();
        const days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
        let h = date.getHours();
        if(h < 10)
        {
                h = "0" + h;
        }
        let m = date.getMinutes();
        if(m < 10)
        {
                m = "0" + m;
        }
        let s = date.getSeconds();
        if(s<10)
        {
                s = "0" + s;
        }
        result = '' + days[day] + ' ' + months[month] + ' ' + d + ' ' + year + ' ' + h + ':' + m + ':' + s;
        document.getElementById(id).innerHTML = result;
        setTimeout('date_time("' + id + '");','1000');
        return true;
}
