 
  Pod::Spec.new do |spec|
    spec.name         = "MobigeoIosSdk"
    spec.version      = "0.10.11"
    spec.summary      = "Mobigeo sdk"
    spec.description  = "mobigeo sdk"
    spec.homepage     = "main"
    spec.license = { :type => "Apache License, Version 2.0", :text => <<-LICENSE
      Licensed under the Apache License, Version 2.0 (the "License");
      you may not use this file except in compliance with the License.
      You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

      Unless required by applicable law or agreed to in writing, software
      distributed under the License is distributed on an "AS IS" BASIS,
      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
      See the License for the specific language governing permissions and
      limitations under the License.
      LICENSE
    }
    spec.author             = { "mbenkhedher" => "mbenkhedher@leni.fr" }
    spec.platform     = :ios, "12.4"
    spec.ios.deployment_target = "12.4"
    spec.source       = { :git => "git@github.com:mobilespot/mobigeoFramework.git", :branch => "main", :tag => "0.10.11" }
    spec.swift_versions = "5"
    #spec.source_files  = "*"
    #spec.resources = "*"
    spec.frameworks = "CoreBluetooth", "CoreLocation", "CoreMotion", "SystemConfiguration", "AudioToolbox", "CoreData"
    spec.libraries = "c++", "z"
    spec.vendored_library = "MobigeoIosSdk/MobigeoIosSdk/naosdk/libnaosdk.a"
    spec.pod_target_xcconfig = { "EXCLUDED_ARCHS[sdk=iphonesimulator*]" => "arm64", "BUILD_LIBRARY_FOR_DISTRIBUTION" => "YES" }
    spec.user_target_xcconfig = { "EXCLUDED_ARCHS[sdk=iphonesimulator*]" => "arm64" }
    spec.dependency "ZIPFoundation", "~> 0.9"
    spec.xcconfig = { "OTHER_SWIFT_FLAGS" => "-no-verify-emitted-module-interface" }

  end
