//
// NALinkStation.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class NALinkStation: JSONEncodable {

    public var mac: String?
    public var ext: String?
    public var Temperature: Float?
    

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["mac"] = self.mac
        nillableDictionary["ext"] = self.ext
        nillableDictionary["Temperature"] = self.Temperature
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
