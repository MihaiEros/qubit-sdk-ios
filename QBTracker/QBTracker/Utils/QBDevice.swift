//
//  QBDevice.swift
//  QBTracker
//
//  Created by Pavlo Davydiuk on 25/08/2017.
//  Copyright © 2017 Qubit. All rights reserved.
//

import Foundation

class QBDevice {
    private static let key = "QUBIT_VISITOR_ID"
    
    static func getId() -> String {
        let keychain = QBKeychainSwift()
        if let deviceId = keychain.get(key), deviceId.count > 0 {
            return deviceId
        }
        
        if let identifierForVendor = UIDevice.current.identifierForVendor?.uuidString {
            return identifierForVendor
        }
        
        let md5String = randomStringInMd5()
        keychain.set(md5String, forKey: key)
        return md5String
    }
    
    private static func randomStringInMd5() -> String {
        let timestamp = NSDate().timeIntervalSince1970
        let randomValue = Int(timestamp) * Int(arc4random_uniform(10))
        let md5String = String(randomValue).md5
        return md5String
    }
}
