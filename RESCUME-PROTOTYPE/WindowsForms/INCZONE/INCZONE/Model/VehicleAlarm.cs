//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace INCZONE.Model
{
    using System;
    using System.Collections.Generic;

    public partial class VehicleAlarm : Interfaces.IEntity
    {
        public int Id { get; set; }
        public int Persistance { get; set; }
        public bool Active { get; set; }
    
        public virtual AlarmConfiguration AlarmConfiguration { get; set; }
        public virtual AlarmLevel AlarmLevel { get; set; }
    }
}
