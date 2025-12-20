const elements = [
    { AN: 1, Symbol: "H", Name: "Hydrogen", AR: "1.008", category: "nonmetal" },
    { AN: 2, Symbol: "He", Name: "Helium", AR: "4.0026", category: "noble-gas" },
    { AN: 3, Symbol: "Li", Name: "Lithium", AR: "6.94", category: "metal" },
    { AN: 4, Symbol: "Be", Name: "Beryllium", AR: "9.0122", category: "metal" },
    { AN: 5, Symbol: "B", Name: "Boron", AR: "10.81", category: "nonmetal" },
    { AN: 6, Symbol: "C", Name: "Carbon", AR: "12.01", category: "nonmetal" },
    { AN: 7, Symbol: "N", Name: "Nitrogen", AR: "14.01", category: "nonmetal" },
    { AN: 8, Symbol: "O", Name: "Oxygen", AR: "16.00", category: "nonmetal" },
    { AN: 9, Symbol: "F", Name: "Fluorine", AR: "19.00", category: "nonmetal" },
    { AN: 10, Symbol: "Ne", Name: "Neon", AR: "20.18", category: "noble-gas" },
    { AN: 11, Symbol: "Na", Name: "Sodium", AR: "22.99", category: "metal" },
    { AN: 12, Symbol: "Mg", Name: "Magnesium", AR: "24.31", category: "metal" },
    { AN: 13, Symbol: "Al", Name: "Aluminium", AR: "26.98", category: "metal" },
    { AN: 14, Symbol: "Si", Name: "Silicon", AR: "28.09", category: "nonmetal" },
    { AN: 15, Symbol: "P", Name: "Phosphorus", AR: "30.97", category: "nonmetal" },
    { AN: 16, Symbol: "S", Name: "Sulfur", AR: "32.06", category: "nonmetal" },
    { AN: 17, Symbol: "Cl", Name: "Chlorine", AR: "35.45", category: "nonmetal" },
    { AN: 18, Symbol: "Ar", Name: "Argon", AR: "39.95", category: "noble-gas" },
    { AN: 19, Symbol: "K", Name: "Potassium", AR: "39.10", category: "metal" },
    { AN: 20, Symbol: "Ca", Name: "Calcium", AR: "40.08", category: "metal" },
    { AN: 21, Symbol: "Sc", Name: "Scandium", AR: "44.96", category: "metal" },
    { AN: 22, Symbol: "Ti", Name: "Titanium", AR: "47.87", category: "metal" },
    { AN: 23, Symbol: "V", Name: "Vanadium", AR: "50.94", category: "metal" },
    { AN: 24, Symbol: "Cr", Name: "Chromium", AR: "52.00", category: "metal" },
    { AN: 25, Symbol: "Mn", Name: "Manganese", AR: "54.94", category: "metal" },
    { AN: 26, Symbol: "Fe", Name: "Iron", AR: "55.85", category: "metal" },
    { AN: 27, Symbol: "Co", Name: "Cobalt", AR: "58.93", category: "metal" },
    { AN: 28, Symbol: "Ni", Name: "Nickel", AR: "58.69", category: "metal" },
    { AN: 29, Symbol: "Cu", Name: "Copper", AR: "63.55", category: "metal" },
    { AN: 30, Symbol: "Zn", Name: "Zinc", AR: "65.38", category: "metal" },
    { AN: 31, Symbol: "Ga", Name: "Gallium", AR: "69.72", category: "metal" },
    { AN: 32, Symbol: "Ge", Name: "Germanium", AR: "72.63", category: "metal" },
    { AN: 33, Symbol: "As", Name: "Arsenic", AR: "74.92", category: "metal" },
    { AN: 34, Symbol: "Se", Name: "Selenium", AR: "78.97", category: "metal" },
    { AN: 35, Symbol: "Br", Name: "Bromine", AR: "79.90", category: "metal" },
    { AN: 36, Symbol: "Kr", Name: "Krypton", AR: "83.80", category: "metal" },
    { AN: 37, Symbol: "Rb", Name: "Rubidium", AR: "85.47", category: "metal" },
    { AN: 38, Symbol: "Sr", Name: "Strontium", AR: "87.62", category: "metal" },
    { AN: 39, Symbol: "Y", Name: "Yttrium", AR: "88.91", category: "metal" },
    { AN: 40, Symbol: "Zr", Name: "Zirconium", AR: "91.22", category: "metal" },
    { AN: 41, Symbol: "Nb", Name: "Niobium", AR: "92.91", category: "metal" },
    { AN: 42, Symbol: "Mo", Name: "Molybdenum", AR: "95.95", category: "metal" },
    { AN: 43, Symbol: "Tc", Name: "Technetium", AR: "98", category: "metal" },
    { AN: 44, Symbol: "Ru", Name: "Ruthenium", AR: "101.07", category: "metal" },
    { AN: 45, Symbol: "Rh", Name: "Rhodium", AR: "102.91", category: "metal" },
    { AN: 46, Symbol: "Pd", Name: "Palladium", AR: "106.42", category: "metal" },
    { AN: 47, Symbol: "Ag", Name: "Silver", AR: "107.87", category: "metal" },
    { AN: 48, Symbol: "Cd", Name: "Cadmium", AR: "112.41", category: "metal" },
    { AN: 49, Symbol: "In", Name: "Indium", AR: "114.82", category: "metal" },
    { AN: 50, Symbol: "Sn", Name: "Tin", AR: "118.71", category: "metal" },
    { AN: 51, Symbol: "Sb", Name: "Antimony", AR: "121.76", category: "metal" },
    { AN: 52, Symbol: "Te", Name: "Tellurium", AR: "127.60", category: "metal" },
    { AN: 53, Symbol: "I", Name: "Iodine", AR: "126.90", category: "nonmetal" },
    { AN: 54, Symbol: "Xe", Name: "Xenon", AR: "131.29", category: "noble-gas" },
    { AN: 55, Symbol: "Cs", Name: "Cesium", AR: "132.91", category: "metal" },
    { AN: 56, Symbol: "Ba", Name: "Barium", AR: "137.33", category: "metal" },
    { AN: 57, Symbol: "La", Name: "Lanthanum", AR: "138.91", category: "metal" },
    { AN: 58, Symbol: "Ce", Name: "Cerium", AR: "140.12", category: "metal" },
    { AN: 59, Symbol: "Pr", Name: "Praseodymium", AR: "140.91", category: "metal" },
    { AN: 60, Symbol: "Nd", Name: "Neodymium", AR: "144.24", category: "metal" },
    { AN: 61, Symbol: "Pm", Name: "Promethium", AR: "145", category: "metal" },
    { AN: 62, Symbol: "Sm", Name: "Samarium", AR: "150.36", category: "metal" },
    { AN: 63, Symbol: "Eu", Name: "Europium", AR: "151.96", category: "metal" },
    { AN: 64, Symbol: "Gd", Name: "Gadolinium", AR: "157.25", category: "metal" },
    { AN: 65, Symbol: "Tb", Name: "Terbium", AR: "158.93", category: "metal" },
    { AN: 66, Symbol: "Dy", Name: "Dysprosium", AR: "162.50", category: "metal" },
    { AN: 67, Symbol: "Ho", Name: "Holmium", AR: "164.93", category: "metal" },
    { AN: 68, Symbol: "Er", Name: "Erbium", AR: "167.26", category: "metal" },
    { AN: 69, Symbol: "Tm", Name: "Thulium", AR: "168.93", category: "metal" },
    { AN: 70, Symbol: "Yb", Name: "Ytterbium", AR: "173.05", category: "metal" },
    { AN: 71, Symbol: "Lu", Name: "Lutetium", AR: "174.97", category: "metal" },
    { AN: 72, Symbol: "Hf", Name: "Hafnium", AR: "178.49", category: "metal" },
    { AN: 73, Symbol: "Ta", Name: "Tantalum", AR: "180.95", category: "metal" },
    { AN: 74, Symbol: "W", Name: "Tungsten", AR: "183.84", category: "metal" },
    { AN: 75, Symbol: "Re", Name: "Rhenium", AR: "186.21", category: "metal" },
    { AN: 76, Symbol: "Os", Name: "Osmium", AR: "190.23", category: "metal" },
    { AN: 77, Symbol: "Ir", Name: "Iridium", AR: "192.22", category: "metal" },
    { AN: 78, Symbol: "Pt", Name: "Platinum", AR: "195.08", category: "metal" },
    { AN: 79, Symbol: "Au", Name: "Gold", AR: "196.97", category: "metal" },
    { AN: 80, Symbol: "Hg", Name: "Mercury", AR: "200.59", category: "metal" },
    { AN: 81, Symbol: "Tl", Name: "Thallium", AR: "204.38", category: "metal" },
    { AN: 82, Symbol: "Pb", Name: "Lead", AR: "207.2", category: "metal" },
    { AN: 83, Symbol: "Bi", Name: "Bismuth", AR: "208.98", category: "metal" },
    { AN: 84, Symbol: "Po", Name: "Polonium", AR: "209", category: "metalloid" },
    { AN: 85, Symbol: "At", Name: "Astatine", AR: "210", category: "metalloid" },
    { AN: 86, Symbol: "Rn", name: "Radon", AR: "222", category: "noble-gas" },
    { AN: 87, Symbol: "Fr", Name: "Francium", AR: "223", category: "metal" },
    { AN: 88, Symbol: "Ra", Name: "Radium", AR: "226", category: "metal" },
    { AN: 89, Symbol: "Ac", name: "Actinium", AR: "227", category: "metal" },
    { AN: 90, Symbol: "Th", Name: "Thorium", AR: "232.04", category: "metal" },
    { AN: 91, Symbol: "Pa", Name: "Protactinium", AR: "231.04", category: "metal" },
    { AN: 92, Symbol: "U", Name: "Uranium", AR: "238.03", category: "metal" },
    { AN: 93, Symbol: "Np", Name: "Neptunium", AR: "237", category: "metal" },
    { AN: 94, Symbol: "Pu", Name: "Plutonium", AR: "244", category: "metal" },
    { AN: 95, Symbol: "Am", Name: "Americium", AR: "243", category: "metal" },
    { AN: 96, Symbol: "Cm", Name: "Curium", AR: "247", category: "metal" },
    { AN: 97, Symbol: "Bk", Name: "Berkelium", AR: "247", category: "metal" },
    { AN: 98, Symbol: "Cf", Name: "Californium", AR: "251", category: "metal" },
    { AN: 99, Symbol: "Es", Name: "Einsteinium", AR: "252", category: "metal" },
    { AN: 100, Symbol: "Fm", Name: "Fermium", AR: "257", category: "metal" },
    { AN: 101, Symbol: "Md", Name: "Mendelevium", AR: "258", category: "metal" },
    { AN: 102, Symbol: "No", Name: "Nobelium", AR: "259", category: "metal" },
    { AN: 103, Symbol: "Lr", Name: "Lawrencium", AR: "266", category: "metal" },
    { AN: 104, Symbol: "Rf", Name: "Rutherfordium", AR: "267", category: "metal" },
    { AN: 105, Symbol: "Db", Name: "Dubnium", AR: "268", category: "metal" },
    { AN: 106, Symbol: "Sg", Name: "Seaborgium", AR: "269", category: "metal" },
    { AN: 107, Symbol: "Bh", Name: "Bohrium", AR: "270", category: "metal" },
    { AN: 108, Symbol: "Hs", Name: "Hassium", AR: "277", category: "metal" },
    { AN: 109, Symbol: "Mt", Name: "Meitnerium", AR: "278", category: "metal" },
    { AN: 110, Symbol: "Ds", Name: "Darmstadtium", AR: "281", category: "metal" },
    { AN: 111, Symbol: "Rg", Name: "Roentgenium", AR: "282", category: "metal" },
    { AN: 112, Symbol: "Cn", Name: "Copernicium", AR: "285", category: "metal" },
    { AN: 113, Symbol: "Nh", Name: "Nihonium", AR: "286", category: "metal" },
    { AN: 114, Symbol: "Fl", Name: "Flerovium", AR: "289", category: "metal" },
    { AN: 115, Symbol: "Mc", Name: "Moscovium", AR: "290", category: "metal" },
    { AN: 116, Symbol: "Lv", Name: "Livermorium", AR: "293", category: "metal" },
    { AN: 117, Symbol: "Ts", Name: "Tennessine", AR: "294", category: "metal" },
    { AN: 118, Symbol: "Og", Name: "Oganesson", AR: "294", category: "noble-gas" }
];


// 1️⃣ Get the HTML element with class "Periodic_Table" - Class is defined in HTML

const table = document.querySelector(".Periodic_Table");

// 2️⃣ Clear any existing content inside the table

table.innerHTML = "";

// 3️⃣ Loop through each object inside the "elements" array


// For each loop, el will hold one element object from the array (element is an array)

for (let el of elements) {

    // 4️⃣ Add a new block of HTML for EACH element
    // We use += so we don't overwrite previous elements

    // table.innerHTML = ""; // start empty

    // table.innerHTML += "<p>First</p>";
    // table.innerHTML += "<p>Second</p>";

    // HTML now becomes:

    // <section class="Periodic_Table">
    //     <p>First</p>
    //     <p>Second</p>
    // </section>

    table.innerHTML += `
        <div class="element ${el.category}">  
            <span class="AN">${el.AN}</span>
            <span class="Symbol">${el.Symbol}</span>
            <span class="Name">${el.Name}</span>
            <span class="AR">${el.AR}</span>
        </div>
    `;
}

// ${...} is part of JavaScript template literals.

// It replaces the expression inside with its actual value.

// 154 = a new class is created 
// 155 = span is created with atomic Number
// 156 = symbol is created
// 157 = name is created
// 158 = Atomic Mass is created