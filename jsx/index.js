class SampleApp extends React.Component {
	render() {
		return(
			<div>
				Hello World!
			</div>
		)
	}
}

window.onload = function(){
	ReactDOM.render(<SampleApp/>, document.getElementById("lorisworkspace"));
}
