import puppeteer from "puppeteer";

const getHtml = async () => {
    // Start a Puppeteer session with:
    // - a visible browser (`headless: false` - easier to debug because you'll see the browser in action)
    // - no default viewport (`defaultViewport: null` - website page will in full width and height)
    const browser = await puppeteer.launch({
      headless: false,
      defaultViewport: null,
    });
  
    // Open a new page
    const page = await browser.newPage();
  
    // On this new page:
    // - open the "http://quotes.toscrape.com/" website
    // - wait until the dom content is loaded (HTML is ready)
    await page.goto("https://www.w3schools.com/html/html_basic.asp", {
    //   waitUntil: "domcontentloaded",
    });

    await page.click(".w3-example > .w3-btn.w3-margin-bottom")
     // Get page data
    // const html = await page.evaluate(() => {
    // // Fetch the first element with class "quote"
    // const btn_arr = document.querySelectorAll(".w3-btn.w3-margin-bottom");
    // // console.log(btn_arr);
    // for(let i=0; i<btn_arr.length-1; i++)
    // {
    //     btn_arr[i].click();
    //     // console.log(btn_arr[i]);
    // }
    // // Fetch the sub-elements from the previously fetched quote element
    // // Get the displayed text and return it (`.innerText`)

    // const text = quote.querySelector(".text").innerText;
    // const author = quote.querySelector(".author").innerText;

    // return { text, author };
//   });

  // Display the quotes
//   console.log(quotes);

  // Close the browser
//   await browser.close();
  };
  
  // Start the scraping
  getHtml();