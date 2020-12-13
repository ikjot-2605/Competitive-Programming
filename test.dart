String modifyTextSize(String enter, int size) {
  String result = "";
  while (enter.indexOf("style=") != -1) {
    int index = enter.indexOf("style=");
    result = result + enter.substring(0, index);
    String toget = enter.substring(index + 7);
    String attributes =
        enter.substring(index + 7, toget.indexOf('"') + index + 7);
    String after = toget.substring(toget.indexOf('"') + 1);

    if (attributes.indexOf('font-size') == -1) {
      attributes = 'font-size:$size px;' + attributes;
    } else {
      attributes = attributes.substring(0, attributes.indexOf('font-size')) +
          'font-size:$size px;' +
          attributes.substring(attributes.indexOf('px;') + 3);
    }

    result = result + "style=" + '"' + attributes + '"';

    enter = enter.substring(toget.indexOf('"') + index + 8, enter.length);
  }
  return result;
}

void main() {
  String s =
      '<p><span style="color: #000000;">Many eons ago, on the crucial ninth day of the legendary war of Mahabharata, Krishna ordained Shikhandi(also known as Shikhandini) to fight Bheeshma. They were born as a daughter to King Drupad, who raised them as their son. Later married to a princess, Shikhandini was blessed by a Yaksha and transformed into a man. Shikhandi was instrumental in winning the war along with Arjun as they attacked Bheeshma with a devastating volley of arrows. Shikhandi embodies all queer people irrespective of their labels. This is one of the many epical anecdotes which ringingly addresses that homosexuality is not a &#8216;myth&#8217; and can be found on every page of not only Indian but also World mythology. From Egyptian Pharaohs to Chinese Emperors, the Greek poet Sappho to Indian Brother-Gods Varuna and Mitra, all are prominent testaments to Queer presence throughout history and myths.</span></p><p><span style="color: #000000;">The Dark Ages(0 A.D.) marked the beginning of the downward spiral for Queer people, kick-started by the criminalisation of homosexuality by the Roman Empire. The Middle Ages(630 A.D) witnessed this criminalization spreading across Africa, Eurasia, and the Middle East, eventually reaching North China and India. Fast forward to the 19th century, where Britain&#8217;s harsh sodomy laws were implanted in its major colonies all over the world. In 1860, Britain revised its penal code for sodomy from death to life imprisonment resulting in a  long-lasting impact in India, Malaysia, Hong Kong, Canada and the rest of its colonies. The 20th century witnessed some significant uprising en masse as the Modern Gay Rights Movement took birth in the United States. The morning of June 28, 1969, beheld the Stonewall Riots at the Stonewall Inn in Greenwich Village of Manhattan, New York, which catapulted the resistance against Queer oppression, violence, and discrimination. The Pride month held every June commemorates the rebellion of Stonewall Riots as a turning point in LGBTQ+ history. The Pride Parade represents the spirit of freedom, self-affirmation, and acceptance within and beyond the society among Queer people. Extending from sober marches to carnivalesque events, Pride march is diversely celebrated in different parts of the world.</span></p><p><span style="color: #000000;"><img class="aligncenter wp-image-3624 size-large" src="https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-1024x683.jpg" alt="" width="1024" height="683" srcset="https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-1024x683.jpg 1024w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-300x200.jpg 300w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-768x512.jpg 768w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-1536x1024.jpg 1536w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-585x390.jpg 585w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013.jpg 1600w" sizes="(max-width: 1024px) 100vw, 1024px" /></span></p><p><span style="color: #000000;"><img class="aligncenter wp-image-3624 size-large" src="https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-1024x683.jpg" alt="" width="1024" height="683" srcset="https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-1024x683.jpg 1024w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-300x200.jpg 300w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-768x512.jpg 768w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-1536x1024.jpg 1536w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013-585x390.jpg 585w, https://pulsenitk.in/wp-content/uploads/2020/06/People-Taksim-Square-Turkey-LGBT-pride-parade-June-30-2013.jpg 1600w" sizes="(max-width: 1024px) 100vw, 1024px" /></span></p>';
  print(modifyTextSize(s, 40));
  String str1 = "Hello World";
  print("New String: ${str1.replaceAll('World', 'ALL')}");
}
