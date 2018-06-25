#
#  Be sure to run `pod spec lint WVersionDeal.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|



  s.name         = "WVersionDeal"
  s.version      = "0.0.1"
  s.summary      = "Frank版本管理."

  s.homepage     = "https://github.com/frankKiwi/WVersion"
  s.license      = "MIT"
  s.author             = { "fanrenFRank" => "1778907544@qq.com" }
  s.platform     = :ios, "8.0"

 


  s.source       = { :git => "https://github.com/frankKiwi/WVersion.git", :tag => "#{0.0.1}" }


  s.source_files  = "WVersion_Fir/*.{Framework}"
  s.exclude_files = "WVersion_Fir/"


  s.requires_arc = true

  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end