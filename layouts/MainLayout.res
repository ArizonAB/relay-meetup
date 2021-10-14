module Link = Next.Link

@react.component
let make = (~children) => {
  let minWidth = ReactDOMRe.Style.make(~minWidth="20rem", ())
  <>
    <div style=minWidth className="flex lg:justify-center">
      <div className="w-full text-gray-900 font-base"> <main> children </main> </div>
    </div>
    <div
      dangerouslySetInnerHTML={
        "__html": `<!-- Global site tag (gtag.js) - Google Analytics -->
<script async src="https://www.googletagmanager.com/gtag/js?id=UA-179118745-1"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());

  gtag('config', 'UA-179118745-1', {'anonymize_ip': true});
</script>
`,
      }
    />
  </>
}
