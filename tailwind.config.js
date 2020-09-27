module.exports = {
  future: {
    removeDeprecatedGapUtilities: true,
  },
  purge: false,
  theme: {
    extend: {},
    minHeight: {
      0: "0",
      "1/4": "25vh",
      "1/2": "50vh",
      full: "100vh",
    },
    minWidth: {
      0: "0",
      full: "100%",
      56: "14rem",
    },
    fontFamily: {
      sans: ["Open Sans", "sans-serif"],
      serif: ["Hurme Geometric Sans", "sans-serif"],
      mono: [
        "Menlo",
        "Monaco",
        "Consolas",
        "Roboto Mono",
        "SFMono-Regular",
        "Segoe UI",
        "Courier",
        "monospace",
      ],
    },
  },
  variants: {
    width: ["responsive"],
  },
  plugins: [],
};
