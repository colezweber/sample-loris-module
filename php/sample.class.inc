<?php
namespace LORIS\sample;
class Sample extends \NDB_Page {
	public $skipTemplate = true;

	function getJSDependencies(){
		$factory = \NDB_Factory::singleton();
		$baseURL = $factory->settings()->getBaseURL();
		$deps    = parent::getJSDependencies();
		return array_merge(
				$deps,
				array(
					$baseURL . "/sample/js/index.js",
				     )
				);
	}
}
