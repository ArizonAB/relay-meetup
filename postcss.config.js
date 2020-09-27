const purgecss = require("@fullhuman/postcss-purgecss")({
  // Specify the paths to all of the template files in your project
  content: ["./components/**/*.re", "./pages/**/*.re", "./layouts/**/*.re"],

  whitelist: ["html", "body"],

  // Include any special characters you're using in this regular expression
  defaultExtractor: (content) => {
    // Capture as liberally as possible, including things like `h-(screen-1.5)`
    const broadMatches = content.match(/[^<>"'`\s]*[^<>"'`\s:]/g) || [];

    // Capture classes within other delimiters like .block(class="w-1/2") in Pug
    const innerMatches = content.match(/[^<>"'`\s.()]*[^<>"'`\s.():]/g) || [];

    return broadMatches.concat(innerMatches);
  },
});

module.exports = {
  plugins: [
    require("@tailwindcss/typography"),
    require("postcss-easy-import"),
    require("tailwindcss"),
    require("autoprefixer"),
    ...(process.env.NODE_ENV === "production"
      ? [purgecss, require("cssnano")()]
      : []),
  ],
};
